/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString, SGExtractionInfo;

@interface SGSelfIdentificationDetection : NSObject {

	NSString* _name;
	NSString* _context;
	SGExtractionInfo* _extractionInfo;
	NSRange _contextRange;

}

@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * context;                               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) NSRange contextRange;                           //@synthesize contextRange=_contextRange - In the implementation block
@property (nonatomic,retain) SGExtractionInfo * extractionInfo;              //@synthesize extractionInfo=_extractionInfo - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(SGExtractionInfo *)extractionInfo;
-(NSRange)contextRange;
-(void)setContextRange:(NSRange)arg1 ;
-(void)setExtractionInfo:(SGExtractionInfo *)arg1 ;
@end
