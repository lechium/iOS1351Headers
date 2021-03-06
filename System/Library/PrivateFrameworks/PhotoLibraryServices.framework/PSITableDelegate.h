/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSITableDelegate
@required
-(void)executeStatement:(id)arg1;
-(long long)lastInsertedRowID;
-(void)executeStatement:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2;
-(void)executeStatementFromString:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2;
-(id)statementFromString:(id)arg1;
-(void)executeStatementFromString:(id)arg1;
-(void)prepareForNumberOfMatchingIds:(unsigned long long)arg1;
-(void)unprepareMatchingIds;
-(void)bindMatchingIds:(const CFSetRef)arg1;
-(void)bindMatchingIds:(const CFArrayRef)arg1 range:(NSRange)arg2;
-(void)bindMatchingIds:(const long long*)arg1 numberOfMatchingIds:(unsigned long long)arg2;
-(void)unbindMatchingIds;

@end

