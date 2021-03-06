/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class wspHeader, wspContext, searchResults;

@interface wspGetRowsOut : NSObject {

	unsigned _rowsReturned;
	wspHeader* _whdr;
	wspContext* _wctx;
	searchResults* _results;

}

@property (retain) wspHeader * whdr;                     //@synthesize whdr=_whdr - In the implementation block
@property (retain) wspContext * wctx;                    //@synthesize wctx=_wctx - In the implementation block
@property (assign) unsigned rowsReturned;                //@synthesize rowsReturned=_rowsReturned - In the implementation block
@property (retain) searchResults * results;              //@synthesize results=_results - In the implementation block
-(searchResults *)results;
-(void)setResults:(searchResults *)arg1 ;
-(wspContext *)wctx;
-(id)initWithCtx:(id)arg1 ;
-(void)setWctx:(wspContext *)arg1 ;
-(wspHeader *)whdr;
-(void)setRowsReturned:(unsigned)arg1 ;
-(unsigned)rowsReturned;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(void)setWhdr:(wspHeader *)arg1 ;
@end

