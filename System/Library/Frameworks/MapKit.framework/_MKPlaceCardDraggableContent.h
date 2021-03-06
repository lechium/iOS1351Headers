/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSItemProviderWriting;
@class UIView;

@interface _MKPlaceCardDraggableContent : NSObject {

	BOOL _header;
	int _analyticsTarget;
	UIView* _view;
	id<NSItemProviderWriting> _draggableContent;

}

@property (nonatomic,retain) UIView * view;                                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<NSItemProviderWriting> draggableContent;              //@synthesize draggableContent=_draggableContent - In the implementation block
@property (assign,getter=isHeader,nonatomic) BOOL header;                             //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) int analyticsTarget;                                     //@synthesize analyticsTarget=_analyticsTarget - In the implementation block
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(BOOL)isHeader;
-(void)setHeader:(BOOL)arg1 ;
-(void)setDraggableContent:(id<NSItemProviderWriting>)arg1 ;
-(void)setAnalyticsTarget:(int)arg1 ;
-(id<NSItemProviderWriting>)draggableContent;
-(int)analyticsTarget;
@end

