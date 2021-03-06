/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>
#import <libobjc.A.dylib/RUITopLevelPageElement.h>

@class RUIChoiceView, RUIElement, NSMutableArray, UIImage, RUIObjectModel, RUIPage, RUISubHeaderElement, NSArray, NSString;

@interface RUIChoiceViewElement : RUIElement <RUITopLevelPageElement> {

	RUIChoiceView* _view;
	RUIElement* _helpLinkElement;
	NSMutableArray* _choices;
	UIImage* _image;
	RUIObjectModel* _objectModel;
	RUIPage* _page;
	RUIElement* _header;
	RUISubHeaderElement* _subHeader;

}

@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (assign,nonatomic,__weak) RUIPage * page;                            //@synthesize page=_page - In the implementation block
@property (nonatomic,retain) RUIElement * header;                              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUISubHeaderElement * subHeader;                  //@synthesize subHeader=_subHeader - In the implementation block
@property (nonatomic,retain) RUIElement * helpLinkElement;                     //@synthesize helpLinkElement=_helpLinkElement - In the implementation block
@property (nonatomic,readonly) NSArray * choices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTitle:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)view;
-(RUIElement *)header;
-(id)titleLabel;
-(void)setHeader:(RUIElement *)arg1 ;
-(RUIPage *)page;
-(void)setPage:(RUIPage *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(id)sourceURL;
-(NSArray *)choices;
-(void)setImageAlignment:(int)arg1 ;
-(void)choiceViewTappedHelpLink:(id)arg1 ;
-(void)choiceView:(id)arg1 tappedChoiceAtIndex:(unsigned long long)arg2 ;
-(RUISubHeaderElement *)subHeader;
-(void)setSubHeader:(RUISubHeaderElement *)arg1 ;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(id)_bigChoiceColor;
-(id)_smallChoiceColor;
-(id)_choiceColorForIndex:(int)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)setHelpLinkElement:(RUIElement *)arg1 ;
-(void)addChoiceElement:(id)arg1 ;
-(RUIObjectModel *)objectModel;
-(RUIElement *)helpLinkElement;
@end

