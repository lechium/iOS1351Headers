/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ML3DatabaseModuleContext;
#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSString;

@interface ML3DatabaseModule : NSObject {

	NSString* _name;
	sqlite3_module* _moduleMethods;
	id<ML3DatabaseModuleContext> _context;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) sqlite3_module* moduleMethods;                   //@synthesize moduleMethods=_moduleMethods - In the implementation block
@property (nonatomic,retain) id<ML3DatabaseModuleContext> context;              //@synthesize context=_context - In the implementation block
-(id)description;
-(NSString *)name;
-(id<ML3DatabaseModuleContext>)context;
-(void)setContext:(id<ML3DatabaseModuleContext>)arg1 ;
-(id)initWithName:(id)arg1 moduleMethods:(sqlite3_module*)arg2 ;
-(sqlite3_module*)moduleMethods;
@end

