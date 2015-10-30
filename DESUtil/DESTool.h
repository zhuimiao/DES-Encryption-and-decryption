//
//  DESTool.h
//  DESUtil
//
//  Copyright © 2015年 com.mob.demoShareSDK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>


@interface DESTool : NSObject

+ (NSString*)TripleDES:(NSString*)plainText encryptOrDecrypt:(CCOperation)encryptOrDecrypt key:(NSString*)key ;


@end
