/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSSet;

@interface FCSyncFileCoordinatedDictionary : NSObject {

	NSURL* _fileURL;
	NSSet* _allowedClasses;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedClasses;              //@synthesize allowedClasses=_allowedClasses - In the implementation block
-(id)init;
-(NSSet *)allowedClasses;
-(NSURL *)fileURL;
-(id)read;
-(BOOL)writeWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2 ;
@end
