加班记录{
    2017-10-08 09:00~14:00 节假日
    2017-10-09 18:00~20:00 工作日
    2017-10-10 18:00~20:00 工作日
}
git{
git@github.com:edenwzg/PythonHardWay.git
git config --global user.email "you@example.com"
git config --global user.name "Your Name"
ssh-keygen -t rsa -C "youremail@example.com"
git clone
git add
git status
git commit -m "Describe Text"
}
Mathematics{
    正方形四周每边长 = a
    面积计算公式：S = a * a
    周长计算公式：C = 4 * a
    对角线长计算公式：sqrt(2) * a
}
error{
    SyntaxError: invalid syntax
        from 写成 form 
    ValueError: not enough values to unpack (expected 4, got 3)
        传递参数错误，用于解包的参数变量不足（预期为4个，得到3个）
}
python{
    --多行注释第一个"""必须在一行的行首
    --用%r输出\n会按照写出来的方式（或者近似方式）打印，它是用来debug的原始格式。
    --practice: 将转义序列和和石化字符串组合到一起，创建一种更复杂的格式。
    --注意到我在每行 print 后面加了个逗号(comma) , 了吧？这样的话 print就不会输出新行符而结束这一行跑到下一行去了。
    python3.x系列不再有 raw_input 函数。3.x中 input 和从前的 raw_input 等效
    --打印出来后我的字符串前面有个 u ，像 u'35' 这样。 它表示 Python 告诉你你的字符串是 unicode。使用 %s 就一切正常了。 
    --python中pydoc模块可以从python代码中获取docstring，然后生成帮助信息。python -m pydoc docstring
    --写成 print "How old are you?" , input() 为什么不行?你觉得可以，但 Python 不这么认为。我唯一能给你的答案是：这样就是不行。
    --python -m pydoc -w atexit   //在当前目录创建atexit.html，生成HTML输出
    --python -m pydoc -p 5000    //启动一个Web服务器监听http://localhost:5000/在线浏览帮助文档
    --Python 不会一下子将它所有的功能给你，而是让你需要什么就调用什么。这样可以让你的程序保持精简，而后面的程序员看到你的代码的时候，这些“import”可以作为提示，让他们明白你的代码用到了哪些功能。
    --argv 是所谓的“参数变量(argument variable)”，是一个非常标准的编程术语。在其他的编程语言里你也可以看到它。这个变量包含了你传递给 Python 的参数。通过后面的练习你将对它有更多的了解。
    --argv “解包(unpack)”，将所有参数放到同一个变量下面，我们将每个参数赋予一个变量名： script, first, second, 以及 third。这也许看上去有些奇怪, 不过”解包”可能是最好的描述方式了。它的含义很简单：“把 argv 中的东西解包，将所有的参数依次赋予左边的变量名”。
    --我们将把这些我们导入(import)进来的功能称作模组。也有人将它们称作“库(libraries)”，不过我们还是叫它们模组吧。
    --命令行参数是字符串，就算你在命令行输入数字，你也需要用 int() 把它先转成数字，和在 input()里一样。
    --三个引号 """ 可以定义多行字符串，而 % 是字符串的格式化工具。
}
触摸桌格斗游戏头脑风暴{
    街霸格斗王
    操作问题
    画面问题
}
--
支持商家配置获得几率
--
毛绒玩具寻找下游供应商
--
游戏每一局结束弹出推送，基于积分的推送（游戏投影屏幕和玩家端（以消息推送方式提醒玩家）），
先确定能否基于个人玩家频繁弹出推送消息，微信有没有什么限制（个人推送微信不支持）
    如果积分大于最小可兑换积分，则弹出最接近的可兑换积分对应礼品的提示：“您可以去前台兑换XXX礼品”
    如果积分小于最小可兑换积分，则弹出“您还差多少分就可以兑换XXX（最小积分的）礼品”
--
营销方案ppt，文案修改，配图
--
管理端方案{
    //创建店面的链接错误
    商家[1]{
        查
            //商家ID
            //商家名称
            //联系人
            //联系电话
        增、改
            //联系人输入提示文字“长度限制为1-20个字符”
            //联系电话输入提示文字“长度为11个字符，只允许包含数字”        
            //设置两种转账途径（直达商家、童游中转）
            //设置两种汇款方式（自动汇款，手动汇款）
            //设置三种结算时长（即时结算，日结，月结）  
            //设置分成比例（如果商家的到账方式设置为“直达商家”，那么使用针对商家的分成比例）
            //将商家店面设置独立一个选项卡
            //标记必填字段
            考虑商家转账细节(有可能会设计到新增一套商家转账页面)
            //做表，根据到账途径决定汇款方式，根据汇款方式决定结算时长
    }
    玩家[2]{
        查
            //玩家ID
            //玩家名称
            //联系电话
            //身份
    }
    店面[3]{
        增、改
            //制作创建店面页面
            //新增产品增加一个输入框
            //标记必填字段
        查
            //店面ID
            //店面名称
            //所属商家
            //联系人
            //联系电话
    }
    产品[4]{
        增、改
            //标记必填字段
            //设置分成比例（如果商家的到账方式设置为“童游中转”，那么使用针对设备的分成比例）
    }
    用户[5]{
        增
            //用户ID（自动生成）
            //用户名
            //联系电话
            //邮件
            //用户类别（目前系统内置3种权限分组（管理员、用户、访客），不做自定义分租）
            //做表，功能权限表(把所有功能列出来，确认访问权限)
        删
            //删除用户
        改
            //同增（但不能修改用户ID）
        查
            //按用户ID查询
            //按用户名查询
    }            
    成就[6]{
        增
            //成就ID
            //成就名称
            //游戏ID
            //游戏名称
            //成就分值
            //成就图标
            //成就逻辑
                //成就作用域(当前局内,当前场景,全部游戏)
                //成就类型(获得,消费,兑换,捕获,翻转)
                //成就实例(积分,卡包,金币,所有动物,五彩牦牛,猛犸象,马鹿,雪豹,牦牛,猞猁,藏羚羊,熊,岩羊,野驴,车)
                //成就逻辑（<=>）
                //成就达成值
                //做表，根据成就的逻辑类型决定成就逻辑的实例项
        改
            //修改成就名称
            //修改游戏ID
            //修改成就分值
            //修改成就图标
            //修改成就达成值
        查
            //根据成就ID查询
            //根据成就名称查询
    }
    礼品[7]{
    }
    消息[8]{
    (先设计一个活动页面，这个活动是一个固定板式的，然后需要考虑改变这个页面的那些部分)
        改
            页面头部图片
            充值活动列表
            活动内容文字描述
    }
    管理控制台{
    }
    产品与服务{
    }
}