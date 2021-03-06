/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AWDProactiveModelFittingModelInfo;

@interface PMLAWDBaseTracker : NSObject {

	AWDProactiveModelFittingModelInfo* _modelInfo;

}

@property (nonatomic,readonly) AWDProactiveModelFittingModelInfo * modelInfo;              //@synthesize modelInfo=_modelInfo - In the implementation block
+(id)trackerForPlanId:(id)arg1 ;
+(id)trackerForModelName:(id)arg1 modelVersion:(id)arg2 modelLocale:(id)arg3 ;
-(id)initWithModel:(id)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
@end

