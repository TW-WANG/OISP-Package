//
//  OISPAPI.h
//  SmartHOME
//
//  Created by AMMA on 2018/6/12.
//  Copyright © 2018年 AMMA. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface OISPAPI : NSObject{
    
}


+(void)findLocalServer:(NSString *)theClientKey delegate:(id)theDelegate;
+(void)createAccount:(NSString *)theWebAPI serverID:(NSString *)theServerID userID:(NSString *)theUserID userName:(NSString *)theUserName deviceName:(NSString *)theDeviceName authcode:(NSString *)theAuthCode
             success:(void (^)(NSData *data,NSURLResponse *result, NSError *error))completion;
+(void)getAccount:(NSString *)theWebAPI serverID:(NSString *)theServerID userID:(NSString *)theUserID
          success:(void (^)(NSData *data,NSURLResponse *result, NSError *error))completion;
+(void)deleteAccount:(NSString *)theWebAPI serverID:(NSString *)theServerID loginID:(NSString *)theLoginID pwd:(NSString *)thePwd deviceName:(NSString *)theDeviceName
             success:(void (^)(NSData *data,NSURLResponse *result, NSError *error))completion;

+(void)getAuthcode:(NSString *)theWebAPI serverID:(NSString *)theServerID loginID:(NSString *)theLoginID pwd:(NSString *)thePwd
           success:(void (^)(NSData *data,NSURLResponse *result, NSError *error))completion;

+(void)getUsers:(NSString *)theWebAPI serverID:(NSString *)theServerID loginID:(NSString *)theLoginID pwd:(NSString *)thePwd
        success:(void (^)(NSData *data,NSURLResponse *result, NSError *error))completion;
+(void)deleteUser:(NSString *)theWebAPI serverID:(NSString *)theServerID loginID:(NSString *)theLoginID pwd:(NSString *)thePwd
     targetUserID:(NSString *)theTargetUserID
          success:(void (^)(NSData *data,NSURLResponse *result, NSError *error))completion;
+(void)updateUser:(NSString *)theWebAPI serverID:(NSString *)theServerID loginID:(NSString *)theLoginID pwd:(NSString *)thePwd
     targetUserID:(NSString *)theTargetUserID targetName:(NSString *)theTargetName isAdmin:(int)isAdmin
          success:(void (^)(NSData *data,NSURLResponse *result, NSError *error))completion;

#pragma mark Private
+(NSString *)getClientKey;

#pragma mark Demo
+(void)test_createAccount;
+(void)test_getAccount;
@end
