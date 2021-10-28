/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CHQuery.h>

@class NSString, NSSet;

@interface CHTitleQuery : CHQuery {

	NSString* _transcribedTitle;
	NSSet* _titleStrokeIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * transcribedTitle;                 //@synthesize transcribedTitle=_transcribedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * titleStrokeIdentifiers;              //@synthesize titleStrokeIdentifiers=_titleStrokeIdentifiers - In the implementation block
-(void)dealloc;
-(id)debugName;
-(id)initWithRecognitionSession:(id)arg1 ;
-(NSString *)transcribedTitle;
-(NSSet *)titleStrokeIdentifiers;
-(void)q_updateQueryResult;
-(void)_setTranscribedTitle:(id)arg1 strokeIdentifiers:(id)arg2 ;
@end
