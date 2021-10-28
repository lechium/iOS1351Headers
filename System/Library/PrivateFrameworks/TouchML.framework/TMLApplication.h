/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TouchML/TouchML-Structs.h>
@class NSString;

@interface TMLApplication : NSObject

@property (nonatomic,readonly) NSString * hardwareModel; 
@property (nonatomic,readonly) NSString * applicationVersion; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)hardwareModel;
-(NSString *)applicationVersion;
@end
