/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/CKBrowserCell.h>

@class CKAppInstallation, CKBrowserIconView;

@interface CKBrowserAppInstallCell : CKBrowserCell {

	CKAppInstallation* _installation;
	CKBrowserIconView* _browserIconView;

}

@property (nonatomic,retain) CKBrowserIconView * browserIconView;              //@synthesize browserIconView=_browserIconView - In the implementation block
@property (nonatomic,retain) CKAppInstallation * installation;                 //@synthesize installation=_installation - In the implementation block
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(id)iconView;
-(void)setInstallation:(CKAppInstallation *)arg1 ;
-(CKBrowserIconView *)browserIconView;
-(void)setBrowserIconView:(CKBrowserIconView *)arg1 ;
-(CKAppInstallation *)installation;
@end
