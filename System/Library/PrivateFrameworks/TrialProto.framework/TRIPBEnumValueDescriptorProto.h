/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBEnumValueOptions;

@interface TRIPBEnumValueDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) int number; 
@property (assign,nonatomic) BOOL hasNumber; 
@property (nonatomic,retain) TRIPBEnumValueOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
+(id)descriptor;
@end

