/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInsertionCondition.h>

@protocol SXComponent;
@class NSString;

@interface SXPastBodyComponentInsertionCondition : NSObject <SXComponentInsertionCondition> {

	id<SXComponent> _firstBodyComponent;
	CGPoint _firstBodyComponentThreshold;

}

@property (nonatomic,retain) id<SXComponent> firstBodyComponent;               //@synthesize firstBodyComponent=_firstBodyComponent - In the implementation block
@property (assign,nonatomic) CGPoint firstBodyComponentThreshold;              //@synthesize firstBodyComponentThreshold=_firstBodyComponentThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3 ;
-(void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2 ;
-(id)findFirstBodyComponentInComponents:(id)arg1 ;
-(void)setFirstBodyComponentThreshold:(CGPoint)arg1 ;
-(void)setFirstBodyComponent:(id<SXComponent>)arg1 ;
-(CGPoint)firstBodyComponentThreshold;
-(id<SXComponent>)firstBodyComponent;
@end

