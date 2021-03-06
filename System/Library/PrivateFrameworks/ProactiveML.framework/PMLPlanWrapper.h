/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@protocol PMLPlanProtocol;
@class NSString;

@interface PMLPlanWrapper : NSObject <PMLPlistAndChunksSerializableProtocol> {

	id<PMLPlanProtocol> _plan;

}

@property (nonatomic,readonly) id<PMLPlanProtocol> plan;              //@synthesize plan=_plan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PMLPlanProtocol>)plan;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithPlan:(id)arg1 ;
@end

