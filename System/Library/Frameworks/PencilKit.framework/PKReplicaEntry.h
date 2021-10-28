/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class PKDrawing;

@interface PKReplicaEntry : NSObject <NSCoding> {

	unsigned _replicaUUIDIndex;
	unsigned _clock;
	unsigned _subclock;
	BOOL _inUse;
	PKDrawing* _drawing;

}

@property (assign,nonatomic) unsigned replicaUUIDIndex;              //@synthesize replicaUUIDIndex=_replicaUUIDIndex - In the implementation block
@property (assign,nonatomic) unsigned clock;                         //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) unsigned subclock;                      //@synthesize subclock=_subclock - In the implementation block
@property (assign,nonatomic) BOOL inUse;                             //@synthesize inUse=_inUse - In the implementation block
@property (assign,nonatomic) PKDrawing * drawing;                    //@synthesize drawing=_drawing - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInUse:(BOOL)arg1 ;
-(BOOL)inUse;
-(unsigned)clock;
-(void)setClock:(unsigned)arg1 ;
-(unsigned)subclock;
-(void)setSubclock:(unsigned)arg1 ;
-(unsigned)replicaUUIDIndex;
-(void)setReplicaUUIDIndex:(unsigned)arg1 ;
-(PKDrawing *)drawing;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(id)initWithReplicaUUIDIndex:(unsigned)arg1 clock:(unsigned)arg2 subclock:(unsigned)arg3 inUse:(BOOL)arg4 forDrawing:(id)arg5 ;
@end
