/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LPHTMLComponent.h>
#import <libobjc.A.dylib/DOMEventListener.h>

@class DOMElement, NSString;

@interface LPHTMLTapToLoadComponent : LPHTMLComponent <DOMEventListener> {

	DOMElement* _tapToLoadLabelElement;
	DOMElement* _tapToLoadSpinnerElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
-(void)handleEvent:(id)arg1 ;
-(void)buildComponents;
-(id)initWithThemePath:(id)arg1 generator:(id)arg2 ;
@end
