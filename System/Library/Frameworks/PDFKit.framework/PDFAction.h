/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionPrivate, NSString;

@interface PDFAction : NSObject <NSCopying> {

	PDFActionPrivate* _private;

}

@property (nonatomic,readonly) NSString * type; 
+(id)actionWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
+(Class)_classForActionDictionary:(CGPDFDictionaryRef)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)commonInit;
-(id)toolTip;
-(CFDictionaryRef)createDictionaryRef;
-(id)nextActions;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)_setNextAction:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)_setNextActions:(CGPDFArrayRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(id)toolTipNoLabel;
-(void)_setNextActions:(id)arg1 ;
-(id)baseURLForDocument:(id)arg1 ;
@end
