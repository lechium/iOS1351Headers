/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXTextRenderCollector.h>
#import <libobjc.A.dylib/SXTangierTextRepBehavior.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface SXTangierTextRenderCollector : NSObject <SXTextRenderCollector, SXTangierTextRepBehavior> {

	NSMutableDictionary* _flows;
	NSDictionary* _previousFlows;
	NSMutableDictionary* _layoutsByComponentIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * flows;                                     //@synthesize flows=_flows - In the implementation block
@property (nonatomic,retain) NSDictionary * previousFlows;                                    //@synthesize previousFlows=_previousFlows - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * layoutsByComponentIdentifier;              //@synthesize layoutsByComponentIdentifier=_layoutsByComponentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableDictionary *)flows;
-(void)addTextStorage:(id)arg1 withLayout:(id)arg2 forNamedFlow:(id)arg3 directLayerHostView:(id)arg4 selectable:(BOOL)arg5 componentIdentifier:(id)arg6 ;
-(NSDictionary *)previousFlows;
-(id)itemWithIdentifier:(id)arg1 storage:(id)arg2 directLayerHost:(id)arg3 inItems:(id)arg4 ;
-(void)storeItem:(id)arg1 forFlowName:(id)arg2 ;
-(void)setPreviousFlows:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)layoutsByComponentIdentifier;
-(void)buildFlowsAndUpdateInfosWithICC:(id)arg1 ;
-(BOOL)tangierTextRepAllowsSelection:(id)arg1 ;
-(void)buildFlowsAndUpdateInfosWithICC:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(id)infoForStorage:(id)arg1 selection:(id)arg2 ;
-(id)flowLayoutForComponentIdentifier:(id)arg1 ;
-(void)setFlows:(NSMutableDictionary *)arg1 ;
-(void)setLayoutsByComponentIdentifier:(NSMutableDictionary *)arg1 ;
@end
