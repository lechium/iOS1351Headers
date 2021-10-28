/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray;

@interface TRITreatment : TRIPBMessage

@property (nonatomic,copy) NSString * treatmentId; 
@property (assign,nonatomic) BOOL hasTreatmentId; 
@property (nonatomic,copy) NSString * treatmentName; 
@property (assign,nonatomic) BOOL hasTreatmentName; 
@property (nonatomic,copy) NSString * treatmentDescription; 
@property (assign,nonatomic) BOOL hasTreatmentDescription; 
@property (nonatomic,retain) NSMutableArray * factorLevelArray; 
@property (nonatomic,readonly) unsigned long long factorLevelArray_Count; 
@property (nonatomic,copy) NSString * cloudKitId; 
@property (assign,nonatomic) BOOL hasCloudKitId; 
+(id)descriptor;
@end
