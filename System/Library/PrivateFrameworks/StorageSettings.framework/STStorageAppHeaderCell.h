/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UILabel, UIImageView, UIImage, NSString;

@interface STStorageAppHeaderCell : PSTableCell {

	NSMutableArray* _constraints;
	UILabel* _titleLabel;
	UILabel* _infoLabel;
	UILabel* _vendorLabel;
	UIImageView* _appIconView;
	UIImageView* _cloudIconView;
	BOOL _isDemoted;
	BOOL _infoHidden;

}

@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * vendor; 
@property (assign,nonatomic) BOOL infoHidden; 
+(id)specifierForAppIdentifier:(id)arg1 ;
+(id)specifierForStorageApp:(id)arg1 ;
+(id)specifierForAppProxy:(id)arg1 ;
+(id)specifierForAppBundleURL:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)info;
-(void)updateConstraints;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(NSString *)vendor;
-(void)setVendor:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)infoHidden;
-(void)setInfoHidden:(BOOL)arg1 ;
@end
