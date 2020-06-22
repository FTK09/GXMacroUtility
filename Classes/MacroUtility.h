//
//  MacroUtility.h
//
//
//  Created by Gao on 2018/07/23.
//  Copyright © 2019 Gao. All rights reserved.
//

///常用宏
#ifndef MacroUtility_h
#define MacroUtility_h

#pragma mark - 0.0 new
#define NJ_DEFAULT_PLACEHOLDER_IMAGE kImage(@"placeholder")

#pragma mark - 1.1 主题色   99, 123, 189
//tint color
#define kNEWBackgroundColor kRGB(248,244,238)
#define kTintColor [UIColor dynamicColor:kRGB(255, 199, 100) WithDarkStyle:kRGB(52, 5, 24)]
#define kTintTitleColor [UIColor dynamicColor:kRGB(199, 123, 189) WithDarkStyle:kRGB(239,54,164)]
#define kTitleBackgroundColor [UIColor dynamicColor:kRGB(213, 223, 252) WithDarkStyle:kRGB(139,154,164)]
#define kBackgroundColor [UIColor dynamicColor:kRGB(245,244,244) WithDarkStyle:kRGB(45,44,44)]
#define kBackgroundColor2 [UIColor dynamicColor:kRGB(255,255,255) WithDarkStyle:kRGB(30,30,30)]
#define kBackgroundColor3 [UIColor dynamicColor:kGrayColor(209) WithDarkStyle:kGrayColor(90)]
#define kNavTintColor [UIColor dynamicColor:kGrayColor(10) WithDarkStyle:kGrayColor(240)]
#define kNavBackgroundColor [UIColor dynamicColor:kRGB(254, 254, 255) WithDarkStyle:kRGB(1, 1, 1)]
#define kTitleColor [UIColor dynamicColor:kGrayColor(0) WithDarkStyle:kGrayColor(255)]
#define kTextColor [UIColor dynamicColor:kGrayColor(40) WithDarkStyle:kGrayColor(210)]
#define kText2Color [UIColor dynamicColor:kGrayColor(66) WithDarkStyle:kGrayColor(190)]
#define kText3Color [UIColor dynamicColor:kGrayColor(80) WithDarkStyle:kGrayColor(170)]
#define kText4Color [UIColor dynamicColor:kGrayColor(100) WithDarkStyle:kGrayColor(150)]
#define kText5Color [UIColor dynamicColor:kGrayColor(120) WithDarkStyle:kGrayColor(130)]
#define kAuthorColor [UIColor dynamicColor:kGrayColor(180) WithDarkStyle:kGrayColor(188)]
#define kTypeColor [UIColor dynamicColor:kGrayColor(140) WithDarkStyle:kGrayColor(198)]

#define ZWRatio(w) (kAspectRatio_W(w))

//横向拉伸适配
#define kAspectRatio_W(w) ((kScreenWidth)/375) * (w)
//纵向拉伸适配
#define kAspectRatio_H(h) (kScreenHeight/667) * (h)
//常用Cell尺寸
#define FULL_SCREEN_WIDTH_CELL_SIZE CGSizeMake(kScreenWidth - 20,kAspectRatio_W(160))
#define HALF_BIG_SCREEN_WIDTH_CELL_SIZE CGSizeMake((kScreenWidth-40)/2,kAspectRatio_W(100))
#define HALF_SMALL_SCREEN_WIDTH_CELL_SIZE CGSizeMake((kScreenWidth-40)/2,kAspectRatio_W(60))
#define THIRD_SCREEN_WIDTH_CELL_SIZE CGSizeMake((kScreenWidth-60)/3,kAspectRatio_W(160))


#pragma mark - 1.2 手机型号及尺寸
#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight  [UIScreen mainScreen].bounds.size.height
//#define kScreenSize [UIScreen mainScreen].bounds.size
#define kScreenMaxLength (MAX(kScreenWidth, kScreenHeight))
#define kScreenMinLength (MIN(kScreenWidth, kScreenHeight))
    // use to iPad
#define isIPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
    // use to iphone 5,5s,6,7,8
#define isIPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
    // use to iphone 6P,7P,8P
#define isIPhonePlus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242,2208), [[UIScreen mainScreen] currentMode].size) : NO)
    // use to iphoneX,XR,XS,XS Max
#define isIPhoneFill ( isIPhone && kScreenMaxLength >= 812.0f)

#pragma mark - 1.3适配相关
    //状态栏高度
#define kStatusBarHeight (isIPhoneFill ? 44 : 20)
    //导航栏高度
#define kNavBarHeight (kStatusBarHeight + 44)
    //安全区顶部高度
#define kSafeAreaTop (isIPhoneFill ? 44 : 0)
    //安全区底部高度
#define kSafeAreaBottom (isIPhoneFill ? 34 : 0)
    //标签栏高度
#define kTabBarHeight (isIPhoneFill ? 83 : 49)
    //距离顶部
#define kDistanceFromTopGuiden(view) (view.frame.origin.y + view.frame.size.height)
    //距离左侧
#define kDistanceFromLeftGuiden(view) (view.frame.origin.x + view.frame.size.width)

/*iPhoneX的状态栏高度差值*/
#define kTopBarDifHeight (CGFloat)(isIPhoneFill ? (24.0):(0))
/*导航条和Tabbar总高度*/
#define kNavAndTabHeight (kTabBarHeight + kNavBarHeight)

#pragma mark - 1.4 字体样式
    //字体适配
#define kNameFont(x) [UIFont fontWithName:@"Heiti SC" size:x]
#define kScaleFont(x) [UIFont systemFontOfSize: x*kScreenWidth/375]
#define kFont(x) [UIFont systemFontOfSize:((isIPhonePlus)?(x + 0):((isIPhoneFill)?(x + 1):x))]
#define kBlodFont(x) [UIFont boldSystemFontOfSize:((isIPhonePlus)?(x + 1):((isIPhoneFill)?(x + 1):x))]

#pragma mark - 2.颜色设置
    //RGB格式

#define Color(r,g,b) RGB(R, G, B)
#define RGB(R, G, B)    [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:1.0]
#define kRGB(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
    //RGBA格式
#define kRGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

#define kColor(c) [UIColor colorWithRed:((c>>24)&0xFF)/255.0 green:((c>>16)&0xFF)/255.0 blue:((c>>8)&0xFF)/255.0 alpha:((c)&0xFF)/255.0]

#define kBackColor kColor(0x20272FFF)
    //随机颜色
#define kRandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]
    //灰色级别
#define kGrayColor(v) kRGB(v,v,v)
    //常用色
#define kWhiteColor UIColor.whiteColor
#define kBlackColor UIColor.blackColor
#define kRedColor UIColor.redColor
#define kYellowColor UIColor.yellowColor
#define kBlueColor UIColor.blueColor
#define kGreenColor UIColor.greenColor
#define kOrangeColor UIColor.orangeColor
#define kCyanColor UIColor.cyanColor
#define kMagentColor UIColor.magentaColor
#define kPurpleColor UIColor.purpleColor
#define kBrownColor UIColor.brownColor
#define kDarkGrayColor UIColor.darkGrayColor
#define kLightGrayColor UIColor.lightGrayColor
#define kClearColor UIColor.clearColor

#pragma mark - 3.系统对象
    //APP对象 （单例对象）
#define kAPPDELEGATE ((AppDelegate *)[UIApplication sharedApplication].delegate)
    //主窗口 （keyWindow）
#define kKeyWindow [UIApplication sharedApplication].keyWindow
    //窗口
#define kWindow (((AppDelegate*)[UIApplication sharedApplication].delegate).window)
    //APP版本号
#define kVersion [[[NSBundle mainBundle] infoDictionary] valueForKey:@"CFBundleShortVersionString"]
    //系统版本号
//#define kSystemVersion [[uidevice currentDevice] systemVersion]

#pragma mark - 3.1通知相关
    //通知中心 （单例对象）
#define kNotificationCenter [NSNotificationCenter defaultCenter]
    //发送通知
#define KPostNotification(name,obj,info) [[NSNotificationCenter defaultCenter]postNotificationName:name object:obj userInfo:info]
    //添加观察者
#define kAdd_Observer(_notificationName, _observer, _observerSelector, _obj) [[NSNotificationCenter defaultCenter] addObserver:_observer selector:@selector(_observerSelector) name:_notificationName object: _obj];
    //移除观察者
#define kRemove_Observer(_observer, _notificationName, _obj) [[NSNotificationCenter defaultCenter] removeObserver: _observer name:_notificationName object:_obj];

#pragma mark - 4.简单调用
    //字符串拼接
#define kStringFormat(format,...) [NSString stringWithFormat:format,##__VA_ARGS__]
//加载本地图片
#define LoadImage(imageName) [UIImage imageNamed:imageName]

    //加载图片
#define kImage(imageName) [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]
     //加载URL
#define kUrlString(string) [NSURL URLWithString:string]
    //安全调用Block
#define kSafeBlock(blockName,...) ({!blockName ? nil : blockName(__VA_ARGS__);})
    //加载View's xib
#define kLoadNib(nibName) [UINib nibWithNibName:@#nibName bundle:[NSBundle mainBundle]]
    //加载ViewController's xib
#define kLoadNibViewController(ViewController) [[ViewController alloc] initWithNibName:@#ViewController bundle:nil];
    // View 圆角和加边框
#define kViewBorderRadiusColor(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]];
    // View 圆角

#define kViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];

   //View添加影音
#define kViewShadowRadiusColor(View, ShadowRadius, ShadowColor, ShadowOffset, Opacity, ShadowRect)\
\
View.layer.shadowRadius = ShadowRadius;\
View.layer.shadowColor = ShadowColor.CGColor;\
View.layer.shadowOffset = ShadowOffset;\
View.layer.shadowOpacity = Opacity;\
View.layer.masksToBounds = NO;\
UIBezierPath *shadowPath = [UIBezierPath bezierPathWithRect:ShadowRect];\
View.layer.shadowPath = shadowPath.CGPath;


//frame
#define Frame(x,y,width,height)  CGRectMake(x, y, width, height)

//最大最小值
#define MaxX(frame) CGRectGetMaxX(frame)
#define MaxY(frame) CGRectGetMaxY(frame)
#define MinX(frame) CGRectGetMinX(frame)
#define MinY(frame) CGRectGetMinY(frame)

//宽度高度
#define Width(frame)    CGRectGetWidth(frame)
#define Height(frame)   CGRectGetHeight(frame)


// 网络
#define CHECK_STRING_STATUS(s) (s && [s isKindOfClass:[NSString class]] && ![s isEqualToString:@""])
#define CHECK_RESPONSE_STATUS(s) (s[@"status"] && [s[@"status"] isKindOfClass:[NSString class]] && [s[@"status"] isEqualToString:@"1"])

// 通知
#define MB_TopWindw (((UIWindow*)[UIApplication sharedApplication].delegate).window)
#define MessageBox(d,r) [MBProgressHUD showError:d toView:MB_TopWindw];

// 网络请求相关
#define kResponseObjectStatusEqualTo0  [responseObject[@"status"] isEqualToString:@"0"]
#define kResponeseDataNULL             data == nil || data.count == 0
#define kSVProgressHUDShowNetError     [SVProgressHUD showErrorWithStatus:@"网络错误"];\
                                       [SVProgressHUD dismissWithDelay:1.f];\
                                       GXLog(@"%@",error.description)
#pragma mark - 5. 永久存储对象
    //NSUserDefaults(实例化)
#define kUserDefaults [NSUserDefaults standardUserDefaults]
    //设置对象
#define kSetUserDefaults(object, key)    \
({                                           \
NSUserDefaults * defaults = [NSUserDefaults standardUserDefaults];    \
[defaults setObject:object forKey:key];      \
[defaults synchronize];    \
})
    //获取对象
#define kGetUserDefaults(key) [[NSUserDefaults standardUserDefaults] objectForKey:key]
    //删除某一个对象
#define kRemoveUserDefaults(key)                                         \
({                                                                          \
NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];       \
[defaults removeObjectForKey:_key];                                     \
[defaults synchronize];                                                 \
})
    //清除 NSUserDefaults 保存的所有数据
#define kRemoveAllUserDefaults  [[NSUserDefaults standardUserDefaults] removePersistentDomainForName:[[NSBundle mainBundle] bundleIdentifier]]

#pragma mark - 6. 获取时间
    //获得当前的年份
#define  kCurrentYear [[NSCalendar currentCalendar] component:NSCalendarUnitYear fromDate:[NSDate date]]
    //获得当前的月份
#define  kCurrentMonth [[NSCalendar currentCalendar] component:NSCalendarUnitMonth fromDate:[NSDate date]]
    //获得当前的日期
#define  kCurrentDay  [[NSCalendar currentCalendar] component:NSCalendarUnitDay fromDate:[NSDate date]]
    //获得当前的小时
#define  kCurrentHour [[NSCalendar currentCalendar] component:NSCalendarUnitHour fromDate:[NSDate date]]
    //获得当前的分
#define  kCurrentMin [[NSCalendar currentCalendar] component:NSCalendarUnitMinute fromDate:[NSDate date]]
    //获得当前的秒
#define  kCurrentSec [[NSCalendar currentCalendar] component:NSCalendarUnitSecond fromDate:[NSDate date]]

#pragma mark - 7. 沙盒路径
    //获取沙盒 temp
#define kPathTemp NSTemporaryDirectory()
    //获取沙盒 Document
#define kPathDocument [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]
    //获取沙盒 Cache
#define kPathCache [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) lastObject]
    //Library/Caches 文件路径
#define kFilePath ([[NSFileManager defaultManager] URLForDirectory:NSCachesDirectory inDomain:NSUserDomainMask appropriateForURL:nil create:YES error:nil])

#pragma mark - 8. 线程
    //GCD - 在Main线程上运行
#define kMainThread(mainQueueBlock) dispatch_async(dispatch_get_main_queue(), mainQueueBlock);
    //GCD - 开启异步线程
#define kGlobalThread(globalQueueBlock) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), globalQueueBlock);

#pragma mark - 9. 判空
    //字符串是否为空
#define kIsNullString(str) ([str isKindOfClass:[NSNull class]] || str == nil || [str length] < 1 ? YES : NO )
    //数组是否为空
#define kIsNullArray(array) (array == nil || [array isKindOfClass:[NSNull class]] || array.count == 0 ||[array isEqual:[NSNull null]])
    //字典是否为空
#define kISNullDict(dic) (dic == nil || [dic isKindOfClass:[NSNull class]] || dic.allKeys == 0 || [dic isEqual:[NSNull null]])
    //是否是空对象
#define kIsNullObject(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))
    //判断对象是否为空,为空则返回默认值
#define kGetNullDefaultObj(_value,_default) ([_value isKindOfClass:[NSNull class]] || !_value || _value == nil || [_value isEqualToString:@"(null)"] || [_value isEqualToString:@"<null>"] || [_value isEqualToString:@""] || [_value length] == 0)?_default:_value

#define hashEqual(str1,str2)  str1.hash == str2.hash

#pragma mark - 10. 单例模式

    // .h文件
#define KSingletonH(name)    +(instancetype)shared##name;

    // .m文件
#define KSingletonM(name) \
static id _instance; \
\
+ (id)allocWithZone:(struct _NSZone *)zone \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [super allocWithZone:zone]; \
}); \
return _instance; \
} \
\
+ (instancetype)shared##name \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [[self alloc] init]; \
}); \
return _instance; \
} \
\
- (id)copyWithZone:(NSZone *)zone \
{ \
return _instance; \
}

#pragma mark - 11. weakify strongify
//weak
#ifndef weakify
#if DEBUG
#if __has_feature(objc_arc)
#define weakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) autoreleasepool{} __block __typeof__(object) block##_##object = object;
#endif
#else
#if __has_feature(objc_arc)
#define weakify(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) try{} @finally{} {} __block __typeof__(object) block##_##object = object;
#endif
#endif
#endif
//strong
#ifndef strongify
#if DEBUG
#if __has_feature(objc_arc)
#define strongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) autoreleasepool{} __typeof__(object) object = block##_##object;
#endif
#else
#if __has_feature(objc_arc)
#define strongify(object) try{} @finally{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) try{} @finally{} __typeof__(object) object = block##_##object;
#endif
#endif
#endif

#pragma mark - 12.DEBUG

#ifdef DEBUG
# define GXLog(fmt, ...) NSLog((@"[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" fmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);
#define GXFunc NSLog(@"%s",__func__);
#define  GXphone self.phoneField.text = kPhoneNum;\
self.identityField.text = kIdentifyNum;
#define kDebugBackgroundColor UIColor.redColor
#else
#define GXLog(fmt, ...)
#define GXFunc
#define GXphone
#define kDebugBackgroundColor UIColor.clearColor
#endif
#endif

#pragma mark - 延迟执行
#define Button_Seconds_Time(_seconds_) \
static BOOL shouldPrevent; \
if (shouldPrevent) return; \
shouldPrevent = YES; \
dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)((_seconds_) * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{ \
shouldPrevent = NO; \
});


/* MacroUtility_h */
