/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:58 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CHQueryDelegate.h>

@protocol PKTitleQueryDelegate;
@class CHTitleQuery, PKDrawing, NSString;

@interface PKTitleQuery : NSObject <CHQueryDelegate> {

	id<PKTitleQueryDelegate> _delegate;
	CHTitleQuery* _titleQuery;
	PKDrawing* _drawing;

}

@property (nonatomic,retain) CHTitleQuery * titleQuery;                             //@synthesize titleQuery=_titleQuery - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                   //@synthesize drawing=_drawing - In the implementation block
@property (assign,nonatomic,__weak) id<PKTitleQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * transcribedTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKTitleQueryDelegate>)delegate;
-(void)setDelegate:(id<PKTitleQueryDelegate>)arg1 ;
-(void)pause;
-(void)start;
-(PKDrawing *)drawing;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(CHTitleQuery *)titleQuery;
-(NSString *)transcribedTitle;
-(void)queryDidUpdateResult:(id)arg1 ;
-(id)initWithDrawing:(id)arg1 ;
-(void)setTitleQuery:(CHTitleQuery *)arg1 ;
@end
