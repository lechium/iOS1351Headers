/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsUI/_UIDocumentListController.h>

@class _UIDocumentPickerSearchContainerModel, NSString;

@interface _UIDocumentSearchListController : _UIDocumentListController {

	_UIDocumentPickerSearchContainerModel* _model;

}

@property (nonatomic,retain) NSString * queryString; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)init;
-(id)initWithModel:(id)arg1 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(BOOL)hideSearchField;
-(Class)_classForChildren;
-(void)itemsOrSelectionDidChange:(BOOL)arg1 ;
@end
