//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDocObjectObservationToken.h"

@class NSString, SCSQLiteDocObjectContext;

@interface SCSQLiteDocObjectObservationToken : NSObject <SCDocObjectObservationToken>
{
    long long _rowid;
    long long _table;
    unsigned long long _token;
    SCSQLiteDocObjectContext *_objectContext;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRowid:(long long)arg1 table:(long long)arg2 token:(unsigned long long)arg3 objectContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

