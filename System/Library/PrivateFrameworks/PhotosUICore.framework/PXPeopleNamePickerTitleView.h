/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class UITextField, NSString, UIFont, NSMutableArray, UIImageView, PHPerson;

@interface PXPeopleNamePickerTitleView : UIView <PXPhotoLibraryUIChangeObserver> {

	UITextField* _nameField;
	NSString* _localizedName;
	UIFont* _nameFont;
	NSString* _placeholder;
	UIFont* _placeholderFont;
	NSMutableArray* _fetchResults;
	UIImageView* _avatarView;
	PHPerson* _person;

}

@property (nonatomic,retain) NSMutableArray * fetchResults;              //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) UIImageView * avatarView;                   //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) PHPerson * person;                          //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) UITextField * nameField;                  //@synthesize nameField=_nameField - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) UIFont * nameFont;                          //@synthesize nameFont=_nameFont - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                       //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) UIFont * placeholderFont;                   //@synthesize placeholderFont=_placeholderFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSString *)placeholder;
-(void)setLocalizedName:(NSString *)arg1 ;
-(PHPerson *)person;
-(void)setPerson:(PHPerson *)arg1 ;
-(UIImageView *)avatarView;
-(void)setAvatarView:(UIImageView *)arg1 ;
-(NSMutableArray *)fetchResults;
-(void)setFetchResults:(NSMutableArray *)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)finishEditing;
-(id)initWithFrame:(CGRect)arg1 person:(id)arg2 ;
-(void)resetImages;
-(void)setNameFont:(UIFont *)arg1 ;
-(void)setPlaceholderFont:(UIFont *)arg1 ;
-(void)_updateFieldText;
-(void)_updateFieldPlaceholder;
-(UITextField *)nameField;
-(UIFont *)nameFont;
-(UIFont *)placeholderFont;
@end
