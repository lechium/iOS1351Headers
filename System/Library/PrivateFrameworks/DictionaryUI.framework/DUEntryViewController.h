/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class DUDefinitionValue;

@interface DUEntryViewController : UIViewController {

	DUDefinitionValue* _definitionValue;

}

@property (retain) DUDefinitionValue * definitionValue;              //@synthesize definitionValue=_definitionValue - In the implementation block
+(id)entryViewControllerWithDefinitionValue:(id)arg1 ;
-(void)viewDidLoad;
-(void)setDefinitionValue:(DUDefinitionValue *)arg1 ;
-(DUDefinitionValue *)definitionValue;
-(id)initWithDefinitionValue:(id)arg1 ;
@end

