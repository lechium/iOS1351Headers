/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UILabel;

@interface STNoUsageDataView : UIView {

	BOOL _localDevice;
	UILabel* _noDataDetailTextLabel;

}

@property (nonatomic,readonly) UILabel * noDataDetailTextLabel;                  //@synthesize noDataDetailTextLabel=_noDataDetailTextLabel - In the implementation block
@property (assign,getter=isLocalDevice,nonatomic) BOOL localDevice;              //@synthesize localDevice=_localDevice - In the implementation block
-(void)setLocalDevice:(BOOL)arg1 ;
-(BOOL)isLocalDevice;
-(UILabel *)noDataDetailTextLabel;
-(id)initWithPreferredFontTextStyle:(id)arg1 ;
@end

