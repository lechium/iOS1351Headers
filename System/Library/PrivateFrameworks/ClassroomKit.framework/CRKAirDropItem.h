/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString, NSDictionary;

@interface CRKAirDropItem : NSObject {

	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileName; 
@property (nonatomic,copy,readonly) NSString * UTI; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)fileURL;
-(NSString *)UTI;
-(id)initWithFileURL:(id)arg1 ;
-(NSString *)fileName;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)copyToFolder:(id)arg1 error:(id*)arg2 ;
-(id)moveToFolder:(id)arg1 error:(id*)arg2 ;
@end

