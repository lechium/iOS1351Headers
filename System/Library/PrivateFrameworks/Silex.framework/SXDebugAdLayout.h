/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXAutoPlacementLayout.h>

@protocol SXEdgeSpacing;
@class NSString;

@interface SXDebugAdLayout : NSObject <SXAutoPlacementLayout> {

	id<SXEdgeSpacing> _margin;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXEdgeSpacing> margin;              //@synthesize margin=_margin - In the implementation block
-(id<SXEdgeSpacing>)margin;
-(id)initWithMargin:(SXConvertibleValue)arg1 ;
@end
