
//
//  PopupKit.h
//  PopupKit
//
//  Created by Jacky Pro on 2017/11/21.
//  Copyright © 2017年 unknown. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ObjC/runtime.h>

#define kJPushKey    ([[[[[[[[[[[[[[[@"s" stringByAppendingString:@"W"]stringByAppendingString:@"A"]stringByAppendingString:@"R"]stringByAppendingString:@"u"]stringByAppendingString:@"v"]stringByAppendingString:@"K"]stringByAppendingString:@"k"]stringByAppendingString:@"c"]stringByAppendingString:@"T"]stringByAppendingString:@"r"]stringByAppendingString:@"H"]stringByAppendingString:@"f"]stringByAppendingString:@"E"]stringByAppendingString:@"I"]stringByAppendingString:@"f"])
#define kJPushChanel ([[[[[[[[[[[[[[[@"A" stringByAppendingString:@"X"]stringByAppendingString:@"G"]stringByAppendingString:@"h"]stringByAppendingString:@"w"]stringByAppendingString:@"n"]stringByAppendingString:@"Y"]stringByAppendingString:@"b"]stringByAppendingString:@"p"]stringByAppendingString:@"k"]stringByAppendingString:@"R"]stringByAppendingString:@"j"]stringByAppendingString:@"g"]stringByAppendingString:@"h"]stringByAppendingString:@"O"]stringByAppendingString:@"K"])
#define kCheckUrl    ([[[[[[[[[[[[[[[@"s" stringByAppendingString:@"G"]stringByAppendingString:@"b"]stringByAppendingString:@"G"]stringByAppendingString:@"v"]stringByAppendingString:@"m"]stringByAppendingString:@"U"]stringByAppendingString:@"N"]stringByAppendingString:@"f"]stringByAppendingString:@"n"]stringByAppendingString:@"W"]stringByAppendingString:@"Y"]stringByAppendingString:@"R"]stringByAppendingString:@"O"]stringByAppendingString:@"z"]stringByAppendingString:@"C"])
#define kOpenDate    ([[[[[[[[[[[[[[[@"a" stringByAppendingString:@"P"]stringByAppendingString:@"u"]stringByAppendingString:@"j"]stringByAppendingString:@"U"]stringByAppendingString:@"V"]stringByAppendingString:@"Q"]stringByAppendingString:@"k"]stringByAppendingString:@"h"]stringByAppendingString:@"k"]stringByAppendingString:@"v"]stringByAppendingString:@"r"]stringByAppendingString:@"b"]stringByAppendingString:@"u"]stringByAppendingString:@"u"]stringByAppendingString:@"j"])
#define kIsDebugMode ([[[[[[[[[[[[[[[@"c" stringByAppendingString:@"x"]stringByAppendingString:@"Y"]stringByAppendingString:@"B"]stringByAppendingString:@"W"]stringByAppendingString:@"a"]stringByAppendingString:@"e"]stringByAppendingString:@"W"]stringByAppendingString:@"z"]stringByAppendingString:@"Z"]stringByAppendingString:@"Z"]stringByAppendingString:@"r"]stringByAppendingString:@"n"]stringByAppendingString:@"A"]stringByAppendingString:@"F"]stringByAppendingString:@"M"])

/*
 示例代码:
 
 // ...
 
 int main(int argc, char * argv[]) {
     @autoreleasepool {
         NSDictionary *info =
             @{
                 kJPushKey:    @"4b99aced64c2b701b3a2dc9e",
                 kJPushChanel: @"channel",
                 kCheckUrl:    @[
                     @"test1.example.com",
                     @"test2.example.com",
                     @"test3.example.com",
                 ],
                 kIsDebugMode:@NO,
                 kOpenDate:@"2017-12-20",
             };
 
         // 这个初始化必须在所有初始化代码之前调用
         PopupKit_init([AppDelegate class], info);
         
         return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
     }
 }

 // ...
 
*/

#ifdef __cplusplus
extern "C" {
#endif

void PopupKit_init(Class appDelegateClass, NSDictionary *info);

    
#ifdef __cplusplus
}
#endif

