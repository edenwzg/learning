git
    git@github.com:edenwzg/PythonHardWay.git
    git config --global user.email "you@example.com"
    git config --global user.name "Your Name"
    ssh-keygen -t rsa -C "youremail@example.com"
    git clone
    git add
    git status
    git commit -m "Describe Text"
Mathematics
    {2017-10-13}
    正方形四周每边长 = a
    面积计算公式：S = a * a
    周长计算公式：C = 4 * a
    对角线长计算公式：sqrt(2) * a
    {2017-10-14}
    质数定义为在大于 1 的自然数中，除了 1 和它本身以外不再有其他因数。质数又称素数。否则称为合数。
    互质数两个数的公因数只有1的两个非零自然数,叫做互质数； 举例：2和3，公因数只有1，为互质数；
        多个数的若干个最大公因数只有1的正整数，叫做互质数；
        两个不同的质数，为互质数；
        1和任何自然数互质。两个不同的质数互质。一个质数和一个合数，这两个数不是倍数关系时互质。不含相同质因数的两个合数互质；
        任何相邻的两个数互质；
        任取出两个正整数他们互质的概率（最大公约数为一）为6/π^2。
Sublime
    error
        每个设置之间用逗号间隔
        Sublime 3 的默认设置修改不了，必须复制到旁边的user设置里
python
    HardWay
        多行注释第一个"""必须在一行的行首"""
        用%r输出\n 会按照写出来的方式（或者近似方式）打印，它是用来debug的原始格式。
        practice: 将转义序列和和石化字符串组合到一起，创建一种更复杂的格式。
        注意到我在每行 print 后面加了个逗号(comma) , 了吧？这样的话 print就不会输出新行符而结束这一行跑到下一行去了。
        python3.x系列不再有 raw_input 函数。3.x中 input 和从前的 raw_input 等效
        打印出来后我的字符串前面有个 u ，像 u'35' 这样。 它表示 Python 告诉你你的字符串是 unicode。使用 %s 就一切正常了。 
        python中pydoc模块可以从python代码中获取docstring，然后生成帮助信息。python -m pydoc docstring
        写成 print "How old are you?" , input() 为什么不行?你觉得可以，但 Python 不这么认为。我唯一能给你的答案是：这样就是不行。
        python -m pydoc -w atexit   //在当前目录创建atexit.html，生成HTML输出
        python -m pydoc -p 5000    //启动一个Web服务器监听http://localhost:5000/在线浏览帮助文档
        Python 不会一下子将它所有的功能给你，而是让你需要什么就调用什么。这样可以让你的程序保持精简，而后面的程序员看到你的代码的时候，这些“import”可以作为提示，让他们明白你的代码用到了哪些功能。
        argv 是所谓的“参数变量(argument variable)”，是一个非常标准的编程术语。在其他的编程语言里你也可以看到它。这个变量包含了你传递给 Python 的参数。通过后面的练习你将对它有更多的了解。
        argv “解包(unpack)”，将所有参数放到同一个变量下面，我们将每个参数赋予一个变量名： script, first, second, 以及 third。这也许看上去有些奇怪, 不过”解包”可能是最好的描述方式了。它的含义很简单：“把 argv 中的东西解包，将所有的参数依次赋予左边的变量名”。
        我们将把这些我们导入(import)进来的功能称作模组。也有人将它们称作“库(libraries)”，不过我们还是叫它们模组吧。
        命令行参数是字符串，就算你在命令行输入数字，你也需要用 int() 把它先转成数字，和在 input()里一样。
        三个引号 """ 可以定义多行字符串，而 % 是字符串的格式化工具 """。  
        类里面定义的是方法，第一个参数是self，需要实例化类以后调用。 
        直接定义的是函数，可以在py文件的任何地方随意调用。
        txt = open(filename) 返回的是文件的内容吗？不是，它返回的是一个叫做“file object”的东西，你可以把它想象成一个磁带机或者 DVD 机。你可以随意访问内容的任意位置，并且去读取这些内容，不过这个 object 本身并不是它的内容。 
        from sys import argv 是什么意思？sys 是一个代码库，这句话的意思是从库里取出 argv 这个功能来，供我使用。
        为什么打开了两次文件没有报错？Python 不会限制你打开文件的次数，事实上有时候多次打开同一个文件是一件必须的事情。
        
        {2017-10-13}
        import os  #导入os模块
        os.getcwd() #获取当前路径  
        os.chdir("D:\\test") #跳到目标路径下
        如果你用 open(file,'w') 模式打开文件，那么 .truncate() 不是必须的，因为 open(file,'w') 会"truncating the file first"。
        file.write("stuff") 在 file.close() 后才会真正写入文件内容。

        ｛2017-10-14｝
        除非对精确度没什么要求，否则尽量避开用round()函数。
        对浮点数精度要求如果很高的话，用decimal模块。
    数学计算
        {2017-10-13}
        17 ** 0.5               // 平方根
        8 ** (1.0 / 3)          // 立方根
    error
        SyntaxError: invalid syntax
            from 写成 form 
        ValueError: not enough values to unpack (expected 4, got 3)
            传递参数错误，用于解包的参数变量不足（预期为4个，得到3个）
        ImportError: cannot import name 'arvg'
            argv 写成 arvg .
financial
    第二章 资产类别与金融工具
    2.1 货币市场(money market)
        短期、变现能力强、流动性强、风险低、债务凭证。现金等价物，简称现金
        2.1.1 短期国库券(T-bills, bills)
            {2017-10-12}
            政府通过向公众出售国库券募集资金，投资者以面值的一定折扣购入国库券，当国库券到期时，持有者从政府那里获得面值，购买价格与面值之差构成了投资者的投资收益。
            大多数货币市场工具的最低交易面值是100000美元，而短期国库券的最低交易面值是100美元，更常见的是10000美元。
            此外，短期国库券的收益可以免除所有的州和地方税，这是其相比于其他货币市场工具又一特征。
            卖方报价（asked price）是指从证券交易商手中买入一张国库券时必须支付的价格。
            买方报价（bid price）是指将一张国库券卖给交易商时所能收到的价格，它略低于卖方报价。
            买卖价差（bid-asked spread）是指买方报价和卖方报价之间的差额，他是交易利润的来源。
            买方的收益率略高于卖方收益率，这是因为价格与收益率成反比。
            距离到期日还差36天的国库券为例，卖方报价的收益率是 0.043% ，通过计算 0.043% * (36/360) = 0.0043% ，
            意味着交易商愿意按面值折扣的 0.0043% 的价格将这种国库券出售。
            因此，面值为 10000 美元的国库券的出售价格是 10000 * (1-0.0043%) = 9999.57
            投资者购入的国库券在36天里涨了 10000 / 9999.57 - 1 = 0.0043%
            把这个收益率转换成按365天计算的年度收益率， 0.0043% * 365/36 = 0.044% 这便是基于卖方报价的收益率，被称为债券等值收益率（bond-equivalent yield）
            小额是指小于 100000 美元。
            买方报价的收益率 0.05% 计算 10000 * [1 - 0.05%*(36/360)] = 9999.50
            贴现法计算收益率有两方面不足：第一，它假设一年只有360天，第二，它以面值为基础而非以投资者的购买价格为基础计算收益率。
            https://baike.baidu.com/item/%E7%9F%AD%E6%9C%9F%E5%9B%BD%E5%BA%93%E5%88%B8/7196340?fr=aladdin
        2.1.2 大额存单(certificate of deposit, CD)
            {2017-10-13}
            大额存单是一种银行定期存款凭证，因此不能随时提取，银行只在大额存单到期时才向储户支付利息和本金。
            面额超过100000美元的大额存单通常是可以转让的。也就是说所有者可以在大额存单到期前将其出售给其他投资者，这样，能够以实际上的短期存款取得 按长期存款利率计算的利息收入。
            可转让存单最早产生于20世纪60年代的美国。由于美国政府对银行支付的存款利率规定上限；上限往往低于市场利率水平。为了吸引客户，商业银行推出可转让大额存单。
            我国大额存单于2015年6月15日正式推出，以人民币计价。并制定了《大额存单管理暂行办法》。
            作为一般性存款，大额存单比同期限定期存款有更高的利率，大多在基准利率基础上上浮40%，少部分银行上浮45%，而定期存款一般最高上浮在30%左右。
            大额存单被联邦存款保险公司视为一种银行存款，当银行出现偿债能力危机时，持有者可以获得25万美元的保额。
        2.1.3 商业票据(commercial paper)
            ｛2017-10-13｝
            知名的大型公司通常不会直接向银行借款，它们通常会发行短期无担保债务票据，即商业票据。
            商业票据是指由金融公司或某些信用较高的企业开出的无担保短期票据。
            商业票据的可靠程度依赖于发行企业的信用程度，可以背书转让，可以贴现。
            通常，银行票据由一定的银行信用额度支出，这样可以保证借款者在商业票据到期时有足够的现金来清偿。
            商业票据的期限通常在1~2个月以内，面值一般是100000美元的倍数。
            小型投资者不能直接投资商业票据，只能通过货币市场上的共同基金投资。
        2.1.4 银行承兑汇票(banker's acceptance bill)(BA)'
            ｛2017-10-13｝
            是指由银行客户向银行发出的在未来某一日期支付的一笔款项指令，期限通常是6个月。
            银行客户在承兑银行开立存款账户的存款人出票，向开户银行申请并经银行审查同意承兑的，保证在指定日期无条件支付确定的金额给收款人或持票人的票据。
            对出票人签发的商业汇票进行承兑是银行基于对出票人资信的认可而给予的信用支持。
            银行承兑汇票是由付款人委托银行开据的一种延期支付票据，票据到期银行具有见票即付的义务；
            当银行背书承兑后，银行开始负有向汇票持有者最终付款的责任，此时的银行承兑汇票可以像其他任何对银行的债券一样在二级市场上交易。
            向短期国库券一样，银行承兑汇票在面值的基础上折价销售。
        2.1.5 欧洲美元(Eurodollars)
            ｛2017-10-13｝
            是指国外银行或美国银行的国外分支机构中以美元计价的存款。
            由于这些银行或分支机构位于美国国外，因此它们可以不受美联储的监管。
            大多数欧洲美元存款是数额巨大且期限短语6个月的定期存款。
        2.1.6 回购和逆回购(repurchase agreements, repos 或 RPs)
            ｛2017-10-13｝
            政府证券的交易商使用回购协议作为一种短期（通常是隔夜）借款手段。
            交易商吧政府证券卖给投资者，并签订协议在第二天以稍高的价格购回。
            在逆回购。交易商找到持有政府证券的投资者买入证券，并协定在未来某一日期以稍高的价格售回给投资者。
        2.1.7 联邦基金(federal funds, fed funds)
            ｛2017-10-13｝
            像我们把钱存银行一样，银行会把钱存在联邦储备银行中。且账户要保持存底余额。这取决于银行客户的存款总额。准备金账户中额钱被称为联邦基金。
        2.1.8 经纪人拆借
        2.1.9 伦敦银行同业拆借市场
        2.1.10 货币市场工具的收益率
            ｛2017-10-13｝
            尽管货币市场证券的风险很低，但并不是没有风险。
            货币市场证券承诺的收益率高于无风险的短期国库券，部分原因是由于其风险相对较高。
            货币市场基金是一种对货币市场工具投资的共同基金。
        资本市场(capital market)
        长期的，风险较大
    2.2 债券市场
        2.2.1 中长期国债
        2.2.2 通胀保值债券
        2.2.3 联邦机构债券
        2.2.4 国际债券
        2.2.5 市政债券
        2.2.6 公司债券
        2.2.7 抵押贷款和抵押担保证券
    2.3 权益证券
        2.3.1 代表所有权股份的普通股
        2.3.2 普通股的特点
        2.3.3 股票市场行情
        2.3.4 优先股
        2.3.5 存托凭证
    2.4 股票市场指数与债券市场指数
        2.4.1 股票市场指数
        2.4.2 道琼斯工业平均指数
        2.4.3 标准普尔 500 指数
        2.4.4 其他美国市值加权指数
        2.4.5 等权重指数
        2.4.6 国外及国际股票市场指数
        2.4.7 债券市场指标
    2.5 衍生工具市场
        2.5.1 期权
        2.5.2 期货合约
    第三章 
personal
	Eden
		CCB|Debit card|6217003810019544033|中国建设银行成都高新支行会计科
		ICBC|Debit card|6212264402019864168|成都高新城南支行
		Ping An Bank|Debit card|6230580000107253390|平安银行大连东港支行
		CMBC|Debit card|6226220707032792|中国民生银行大连高新区科技支行
House
	Purchase
	Spruce up spend
		装修公司|金尚装饰
			总价 82000.00
				首付款 签约付款 30% 24600.00
				二期款 施工进场 40% 32800.00
				中期款 进场付款 65% 53300.00
				尾期款 测量橱柜 5% 4100.00
		装修额外花销
			总价
		定制家具|伊美嘉衣柜
			总价 21750.00
				定金款 设计方案 500.00
				首款款 签约付款 80% 18000.00
				尾款款 货到付款 20% 3250.00
		封阳台|中信华龙
			总价 4170.00
				定金款 签约付款 50% 2000.00
				尾款款 验收合格 50% 2170.00
		物业装修管理
			总价 1397.27
				垃圾清运费 923.68
				电梯使用费 471.70
				其他工本费 1.89
		物业服务费 
			2017年 2881.92		
		购买家具家电
			总价

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

加班记录
    2017-10-08 09:00~14:00 5 节假日
    2017-10-09 18:00~20:00 2 工作日
    2017-10-10 18:00~20:00 2 工作日
    2017-10-13 18:00~19:00 1 工作日
    2017-10-14 10:00~18:00 8 双休日
触摸桌格斗游戏
        街霸格斗王
        操作问题
        画面问题 
投影端
    兑换提示：
        如果积分大于最小可兑换积分，则弹出最接近的可兑换积分对应礼品的提示：“恭喜您获得XXX礼品，请查看手机微信玩家端的获奖信息，并去前台兑换礼品”
        如果积分小于最小可兑换积分，则弹出“您还差多少分就可以兑换XXX（最小积分的）礼品”
商家端
    支持商家配置游戏参数
        积分
玩家端
    游戏每一局结束弹出推送，基于积分的推送（游戏投影屏幕和玩家端（以消息推送方式提醒玩家））
    确定能否基于个人玩家频繁弹出推送消息，微信有没有什么限制
        已确认：个人推送微信不支持，只支持每月4条的群发推送。
    开发礼品券充值功能，在充值界面增加通过礼品券充值的充值方式。
管理端
    {2017-10-13} 与外包方确定的修改及需要完善内容
        考虑商家转账细节（有可能会设计到新增一套商家转账页面）,不确定微信能否自动转账出去
        全局修改
            去掉每个列表前面的多选框
            //所有的删除均为逻辑删除
            //在数据库中关联玩家ID与微信openID
            去掉每个列表的自定义列表项
            确定每个列表中必要的排序
            去掉每个页面的刷新
            去掉所有的按账期选择框
            所有列表页都做翻页
            关键操作加提示文字，并需要最高权限
            新增所有编辑页面的只读页面，内容相同，但不能编辑
            修改所有文本框的提示语
            将用户的权限表修改为更好的描述方式
            更新选择关系依赖表
            更新此次修改内容列表
        //商家管理
            //创建商家
                //改为与商家编辑的内容一致，除了
                    //去掉商家微信号
                    //修改按钮改为创建商家
                    //去掉所有可填入内容
            //商家信息
                //新增商家资金账户
                //转账途径为直达商家，则不能设置分成比例
                //去掉手动汇款列表项
                //修改商家名称输入框提示文字
                //创建商家的时候使用用户的手机号代替玩家ID
                //去掉商家分成比例设置，现阶段随意读取任意次商家设备的分成比例
            //店面信息
                //去掉创建店面
            //账单信息
                //当前商家所有未结款金额
                //显示手动结清所有未结款按钮
                //账单流水列表
                    //查询功能
                    //交易日期
                    //摘要
                    //玩家ID
                    //结算日期
                    //店面信息
                    //设备信息
                    //交易日期
                    //摘要
                    //玩家ID
                    //玩家支付
                    //收入
                    //商家分成
                    //分成金额
                    //结算日期
                    //手续费
                    //店面信息
                    //设备信息
                    //操作
                        //手动转款按钮        
            //礼品信息
                //礼品列表
                    //礼品图片
                    //礼品ID
                    //礼品名称
                    //商家发放量
                    //兑换积分
                    //礼品备注
                    //删除礼品
                    //添加礼品按钮
                        //礼品ID
                        //兑换积分
                    //修改礼品按纽
                        //礼品ID
                        //兑换积分
            //经营者
                //创建经营者
                    //玩家ID
                    //名称
                    //联系电话
                    //身份
                    //创建经营者按钮
                //经营者列表
                    //玩家ID
                    //微信号
                    //名称
                    //联系电话
                    //身份
                    //操作
                        //删除
                        //创建
                        //编辑
                //设置商家管理人员权限（商家法人、商家店员、商家管理员、玩家）
                    //商家法人拥有最高权限，一旦创建不能更换，不能降级
                    //商家管理员也拥有最高权限，管理员可以创建多个，可以更换身份
                    //商家店员只有部分权限，可以创建多个，可以更换身份
                    //一旦将商家店员和商家管理员删除，那么他会降级为玩家，同时将失去进入商家端的权限
                    //目前这三者角色在商家端是没有权限区别的，目的是实现多个人管理一个商家的目的，并为后期提供扩展。
            //二维码
                //商家二维码显示
                //选择单台设备
                //打印二维码
        设备管理 
            创建设备
                设备ID
                设备名称
                产品ID
                店面ID
                设备分成比例
            修改设备
            删除设备
            查询设备
        玩家管理
            //如果玩家被冻结，在进入游戏中心的时候，显示冻结提示静态页面
            //去掉玩家二维码列
            //去掉玩家跳转商家
            资金流转：充值》输入钱数》扣费》三方扣费成功》点券到账》钱到账》商家到账
        //店面管理
            //店面编辑-产品列表 改为 设备列表
            //去掉设备列表中的上线功能
        //产品管理
            //产品列表的实例数量改为设备已售数量
            //将产品列表的删除改为停用
            去掉产品分成比例
        //成就管理
            //删除成就图标，包含编辑页、创建页、列表
        //礼品管理
            //礼品列表
                //礼品ID
                //礼品图片
                //礼品名称
                //发放总量
                //礼品备注
                //礼品编辑
                //礼品禁用            
            //礼品查询
                //礼品ID
                //礼品名称
                //搜索
            //创建礼品
                //礼品ID
                //礼品名称
                //礼品图片
                //选择图片
                //礼品备注
                //创建礼品
        活动管理
            创建活动
    //创建店面的链接错误
    ｛2017-10-11｝版本修改内容
        商家[1]
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
                //做表，根据到账途径决定汇款方式，根据汇款方式决定结算时长
        玩家[2]
            查
                //玩家ID
                //玩家名称
                //联系电话
                //身份
        店面[3]
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
        产品[4]
            增、改
                //标记必填字段
                //设置分成比例（如果商家的到账方式设置为“童游中转”，那么使用针对设备的分成比例）
        用户[5]
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
        成就[6]
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
        消息[8]
            先设计一个活动页面，这个活动是一个固定板式的，然后需要考虑改变这个页面的那些部分
            页面头部图片
            充值活动列表
            活动内容文字描述
营销方案 ppt【2017-10-16】
计算运营定价【2017-10-13】
    成本均摊参数
        预定销售数量 10 套
        产品销售版本 2 种
        合作时间 3~6 个月 根据客户的客流量来确定浮动范围
        分成比例 30%~50% 如果客户要拿少的分成比例，那么合约时间就要加长，反之...
    标准版
        成本
            硬件成本
                地台 3 * 
                投影
                集成箱
                主机
                kinext 2.0
                扫码器 3 * 
                路由器
                音响
            礼品成本
                玩偶成本
                卡牌成本
            开发成本
                自研成本
                    2017-07 ~ 2017-11 4个月
                    参与人数 4.5 人
                    平均人员单价 8000/月
                    4 * 4.5 * 8000 = 144000.00
                外包成本
                    运营系统 60000
            运营成本
                服务器空间及带宽
                客服人员
            安装售后成本
        定价
            首付款模式 总价 48800 首付款 23000 ~ 25000 分成比例？ 单次价格？ 回款后 分成比例？ 客流量达到多少？合作运营的是时间？
                合作模式：客户违约，押金不退，设备收回（如何回收设备？）
                首推此种模式
                关闭线下充值通道，不让客户接触现金
                关闭断网进行游戏的功能
                如果客户违约，如何让游戏不能运行？
                定价成本包含那些类型的成本？
            保证金模式
                合作模式：客户违约，保证金退还，设备收回，补齐成本（包含哪几部分成本？）
                次推此种模式
            出售模式  总价  48800 分成比例？
                采用什么形式合作？
    投币版
        定价
            投币版中包含那些合作模式？
礼品供应商【2017-10-14】
    玩偶
        晶舟毛绒玩具
            起订量
    卡牌
        XXX
            起订量