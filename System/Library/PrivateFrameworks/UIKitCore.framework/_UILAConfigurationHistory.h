/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILAPropertySource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSMutableSet, NSString;

@interface _UILAConfigurationHistory : NSObject <_UILAPropertySource, NSCopying> {

	NSMutableSet* _newlyHiddenItems;
	NSMutableSet* _newlyUnhiddenItems;
	NSMutableSet* _invalidBaselineConstraints;
	BOOL _layoutFillsCanvas;
	BOOL _layoutUsesCanvasMarginsWhenFilling;
	BOOL _hasEstablishedBaseValues;
	BOOL _inLayoutArrangementUpdateSection;
	long long _axis;

}

@property (assign,nonatomic) BOOL hasEstablishedBaseValues;                                                                //@synthesize hasEstablishedBaseValues=_hasEstablishedBaseValues - In the implementation block
@property (assign,getter=isInLayoutArrangementUpdateSection,nonatomic) BOOL inLayoutArrangementUpdateSection;              //@synthesize inLayoutArrangementUpdateSection=_inLayoutArrangementUpdateSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long axis;                                                                               //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) BOOL layoutFillsCanvas;                                                                       //@synthesize layoutFillsCanvas=_layoutFillsCanvas - In the implementation block
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;                                                      //@synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling - In the implementation block
@property (nonatomic,readonly) NSSet * _newlyHiddenItems;                                                                  //@synthesize newlyHiddenItems=_newlyHiddenItems - In the implementation block
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems;                                                                //@synthesize newlyUnhiddenItems=_newlyUnhiddenItems - In the implementation block
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints;                                                         //@synthesize invalidBaselineConstraints=_invalidBaselineConstraints - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(void)_invalidateBaselineConstraint:(id)arg1 ;
-(BOOL)layoutFillsCanvas;
-(void)setLayoutFillsCanvas:(BOOL)arg1 ;
-(BOOL)layoutUsesCanvasMarginsWhenFilling;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1 ;
-(NSSet *)_newlyHiddenItems;
-(NSSet *)_newlyUnhiddenItems;
-(NSSet *)invalidBaselineConstraints;
-(void)setHasEstablishedBaseValues:(BOOL)arg1 ;
-(void)setInLayoutArrangementUpdateSection:(BOOL)arg1 ;
-(BOOL)hasEstablishedBaseValues;
-(BOOL)isInLayoutArrangementUpdateSection;
@end

