/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNMeCardSharingPickerViewControllerDelegate <NSObject>
@optional
-(void)sharingPicker:(id)arg1 didSelectSharingStatus:(unsigned long long)arg2;
-(void)sharingPickerDidCancel:(id)arg1;

@required
-(void)sharingPicker:(id)arg1 didChangeSharingState:(BOOL)arg2;
-(void)sharingPickerDidFinish:(id)arg1;
-(void)sharingPicker:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;
-(void)sharingPicker:(id)arg1 didSelectNameFormat:(unsigned long long)arg2;

@end
