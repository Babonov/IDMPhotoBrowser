//
//  Defines.h
//  PhotoBrowserDemo
//
//  Created by Никита Бабонов on 08.05.2018.
//

#ifndef Defines_h
#define Defines_h

#pragma mark - Display Params

#define kIsIPad   (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define kIsIPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define kIsRetina ([[UIScreen mainScreen] scale] >= 2.0)

#define kScreenScale [[UIScreen mainScreen] scale]

#define kScreenWidth  ([UIScreen mainScreen].bounds.size.width)
#define kScreenHeight ([UIScreen mainScreen].bounds.size.height)

#define kScreenMaxLength (MAX(kScreenWidth, kScreenHeight))
#define kScreenMinLength (MIN(kScreenWidth, kScreenHeight))

#define kIsIPhone4  (kIsIPhone && kScreenMaxLength == 480.0)
#define kIsIPhone5  (kIsIPhone && kScreenMaxLength == 568.0)
#define kIsIPhone6  (kIsIPhone && kScreenMaxLength == 667.0)
#define kIsIPhone6P (kIsIPhone && kScreenMaxLength == 736.0)
#define kIsIPhoneX  (kIsIPhone && (kScreenMaxLength == 812.0 || kScreenMaxLength == 896.0))


#endif /* Defines_h */
