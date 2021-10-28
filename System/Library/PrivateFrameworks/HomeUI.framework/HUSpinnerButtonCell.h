/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUButtonCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class UIActivityIndicatorView, NSString, HFItem;

@interface HUSpinnerButtonCell : HUButtonCell <HUCellProtocol> {

	BOOL _showSpinner;
	BOOL _useFullWidthSeparator;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL showSpinner;                                                 //@synthesize showSpinner=_showSpinner - In the implementation block
@property (assign,nonatomic) BOOL useFullWidthSeparator;                                       //@synthesize useFullWidthSeparator=_useFullWidthSeparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(CGRect)_separatorFrame;
-(BOOL)showSpinner;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)setUseFullWidthSeparator:(BOOL)arg1 ;
-(void)createSpinner;
-(BOOL)useFullWidthSeparator;
@end
