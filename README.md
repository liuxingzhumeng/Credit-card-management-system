---

typora-copy-images-to: images
---

信用卡信息管理系统目录

[TOC]



# 1 具体实现功能

信用卡管理系统是可以对用户对信用卡的使用情况进行管理。其中权限分为业务员和总经理。权限分明有利于总经理对业务员进行管理，和查看客户情况。

（1）在信用卡管理系统中对客户的管理包含了，添加，删除，修改，统计，备份，查看。

（2）其中总经理也可自由添加业务员。总经理添加业务员后业务员才可以登录其页面进行工作。

（3）总经理可以通过查看，来查看所有业务员记录客户的情况，并可以对其修改。修改进行对源文件的备份就可以完成了。

（4）总经理可以自由删除客户

（5）业务员只能看到自己的客户看不到其他业务员的客户。

（6）业务员对客户的权限自由添加和修改，还有查看统计图。

（7）信用卡管理系统中菜单设计了工具。其中可以通过工具进行关机，打开计算器，录屏，记事本等。

（8）当今时代是互联网的时代，信用卡利用互联网的WEB技术进行更新的检查。以达到即使跟上时代潮流的效果。



# 2 实现页面

1. 如果系统检测到是第一次运行的话，会先展示该页面，通过该页面注册管理员，对整个系统进行管理；该页面有个检测机制，如果输入的数据是非法的则不会通过



![](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/1.png)

2. 接下来有管理员后，就是实现管理员登录功能，用户输入用户名密码后，系统会判断是否读取记住密码，并将密码保存本地文件夹



​	![](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/2.png)



3. 登录后会总经理管理页面，图中的图标都是可以用的功能的，如果关闭改主界面会进行最小托盘化的功能；且里边的数据的编号会是递增的状态进行增加

![](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/3.png)



4. 管理员添加用户后，用户就可以登录用户界面，用户界面区别在于，功能边少了很多



![](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/4.png)

# 3 软件使用说明

信用卡管理系统使用方法

 

**1.**   在浏览器上输入网址后http://106.13.122.53/cord/你会看到这个界面，点击立即下载

​	这个网页是我大一时自己弄的静态页面部署到了百度云上边，随着百度云服务器的过期，这个源码前端静态页面也找不到了

 

![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image002.png)

 

 

**2.**   **下载完成后双击CXYCard.exe文件**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image004.png)**

 

 

**3.**   **如果软件第一次在电脑上运行则会有两个两个消息提示你下一步怎么做，点击确认**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image006.png)![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image008.png)**

 

 

**4.**   **点击确认后按照提示修改默认的root密码。这个非常关键进入总管理系统一定要用到root账号和你改了的密码，然后里边的编号为yewuyuan的账号是通过添加而加进去的。**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image010.png)**

 

 

**5.**   **添加完想要添加的信息之后就把这个窗口关闭了，然后在双击一遍CXYCard.exe文件。只要不是在电脑上第一次打开这个文件窗口都会是登录界面的窗口然后，就可以用root账号进行登录管理了，而root之外的账号登录只能进入业务员窗口。**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image012.png)**

**总管理窗口**

 

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image014.png)**

**业务员窗口**

 

 

**6.**   **可以看出业务员和总管理窗口的权限是不一样的，如果关闭窗口时不想最小托盘化的话就点击直接关闭的选项，就可以直接退出程序了。登录窗口的记住密码功能，错误的账号密码不会被记录**

 

 

**7.**   **添加客户的功能，这个功能业务员和总管理窗口的添加功能没有区别**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image016.png)**

 

 

**在最新的版本中添加的编号有自加的默认值（旧的版本中没有）。**

**8.**   **修改功能，业务员和总管理对话框的修改功能也是没有区别的会根据你所选择的列进行修改**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image018.png)**

 

 

**9.**   **删除功能，这个功能只有总管理员界面拥有。总管理员可以随意删除客户**

**10.**  **查看功能，这个功能也只有总管理员界面拥有，主要是用于查看所有业务员的客户信息。点击查看图标，之后会打开一个窗口**

**里边![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image020.png)**

**里边的文件是按照业务员的编号命名的只要点开对应的编号名文件就可以查看对应业务员的客户信息了。**

 

 

**11.**  **如果查看完客户信息后有不合理的地方修改后就需要用到备份功能了，这个功能也是只有总管理员界面拥有**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image022.png)**

**点击备份选择刚才打开对应编号的文件点击保存就可以把业务员的客户就行修改了**

 

 

**12.**  **点击统计功能系统会自动统计客户的年龄分布，这个功能业务员和总管理页面的功能完全一样**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image024.png)**

 

 

**13.**  **点击帮助，是关于系统的信息可以帮助检查更新，这个功能只有总经理页面拥有**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image026.png)**

 

 

**14.**  **添加业务员功能，这个功能只有总管理员页面有，点击后你后看到第一运行时的窗口![img](clip_image028.png)**

**你可以添加新的业务员，也可以修改密码，删除业务员，可以进行备份和恢复，但是系统不支持删去root成员，各种编号是唯一的，点击修改root成员的编号不可修改**

 

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image030.png)**

**修改**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image032.png)**

**删除**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image034.png)**

**添加**

 

 

**15.**  **鼠标右击，弹出菜单方便选择，总管理员和业务员界面都有这个功能**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image036.png)**

 

 

**16.**  **工具栏功能，可以快捷打开电脑系统中的一些常用功能**

**![img](https://github.com/liuxingzhumeng/Credit-card-management-system/blob/master/images/clip_image038.png)**

 

 

**17.**  **卸载功能，在工具栏里边，自由总管理员页面有这个权限，卸载后会在，你运行程序的地方生成一个一键删除的文件，点击后就可以方便快捷的删除所有的文件了。注：所有文件默认存储在C:\XYKGL的文件夹中。**
