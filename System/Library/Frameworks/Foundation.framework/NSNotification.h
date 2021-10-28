/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface NSNotification : NSObject <NSCopying, NSCoding>

@property (copy,readonly) NSString * name; 
@property (retain,readonly) id object; 
@property (copy,readonly) NSDictionary * userInfo; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
+(id)notificationWithName:(id)arg1 object:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
@end
