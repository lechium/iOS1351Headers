/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCInterface;

@interface _NSXPCConnectionExportInfo : NSObject {

	id _exportedObject;
	NSXPCInterface* _exportedInterface;
	long long _exportCount;

}

@property (nonatomic,retain) id exportedObject;                               //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (assign,nonatomic) long long exportCount;                           //@synthesize exportCount=_exportCount - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(id)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(long long)exportCount;
-(void)setExportCount:(long long)arg1 ;
@end
