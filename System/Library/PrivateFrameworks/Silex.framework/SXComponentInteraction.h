/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SXComponentInteractionHandler;
@class SXComponentView;

@interface SXComponentInteraction : NSObject {

	SXComponentView* _componentView;
	id<SXComponentInteractionHandler> _handler;
	unsigned long long _types;

}

@property (nonatomic,__weak,readonly) SXComponentView * componentView;                 //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,readonly) id<SXComponentInteractionHandler> handler;              //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) unsigned long long types;                               //@synthesize types=_types - In the implementation block
-(id<SXComponentInteractionHandler>)handler;
-(SXComponentView *)componentView;
-(unsigned long long)types;
-(id)initWithComponentView:(id)arg1 handler:(id)arg2 types:(unsigned long long)arg3 ;
-(BOOL)handlesType:(unsigned long long)arg1 ;
@end
