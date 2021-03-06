/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CUIKSingleDayTimelineGeometryDelegate <NSObject>
@property (nonatomic,readonly) CGRect displayedRect; 
@property (nonatomic,readonly) double hourHeight; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double timeWidth; 
@property (nonatomic,readonly) BOOL originIsUpperLeft; 
@optional
-(BOOL)shouldReverseLayoutDirection;

@required
-(double)topPadding;
-(CGPoint*)pointForDate:(double)arg1;
-(double)dateForPoint:(CGPoint)arg1;
-(double)hourHeight;
-(double)timeWidth;
-(CGRect)displayedRect;
-(BOOL)originIsUpperLeft;

@end

