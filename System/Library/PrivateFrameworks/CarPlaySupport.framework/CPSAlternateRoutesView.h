/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSRouteRowInteracting.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>

@protocol CPSAlternateRouteSelecting;
@class NSArray, UIView, NSString;

@interface CPSAlternateRoutesView : UIView <CPSRouteRowInteracting, CPSLinearFocusProviding> {

	NSArray* _availableRouteChoices;
	unsigned long long _indexForSelectedRoute;
	id<CPSAlternateRouteSelecting> _selectionDelegate;
	UIView* _rowStack;

}

@property (nonatomic,retain) UIView * rowStack;                                                    //@synthesize rowStack=_rowStack - In the implementation block
@property (nonatomic,retain) NSArray * availableRouteChoices;                                      //@synthesize availableRouteChoices=_availableRouteChoices - In the implementation block
@property (assign,nonatomic) unsigned long long indexForSelectedRoute;                             //@synthesize indexForSelectedRoute=_indexForSelectedRoute - In the implementation block
@property (assign,nonatomic,__weak) id<CPSAlternateRouteSelecting> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredFocusEnvironments;
-(id<CPSAlternateRouteSelecting>)selectionDelegate;
-(void)setSelectionDelegate:(id<CPSAlternateRouteSelecting>)arg1 ;
-(id)_linearFocusItems;
-(void)didSelectRow:(id)arg1 representingRouteChoice:(id)arg2 ;
-(void)setIndexForSelectedRoute:(unsigned long long)arg1 ;
-(void)setRowStack:(UIView *)arg1 ;
-(UIView *)rowStack;
-(NSArray *)availableRouteChoices;
-(unsigned long long)indexForSelectedRoute;
-(void)_reloadRows;
-(void)setAvailableRouteChoices:(NSArray *)arg1 ;
@end

