/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OAVReadState.h>

@class WXReadState, WDParagraph, NSMutableDictionary;

@interface WXOAVReadState : OAVReadState {

	WXReadState* mWxState;
	WDParagraph* mParagraph;
	NSMutableDictionary* mNextVmlShapeIdToTextBoxMap;

}
-(id)currentParagraph;
-(void)setCurrentParagraph:(id)arg1 ;
-(id)initWithWXReadState:(id)arg1 ;
-(id)wxReadState;
-(id)nextVmlShapeIdToTextBoxMap;
@end
