//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface EGODatabaseRow : NSObject
{
    NSArray *_data;
    NSArray *_names;
}

@property(retain, nonatomic) NSArray *names; // @synthesize names=_names;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)dateForColumnAtIndex:(unsigned long long)arg1;
- (id)dateForColumn:(id)arg1;
- (id)dataForColumnAtIndex:(unsigned long long)arg1;
- (id)dataForColumn:(id)arg1;
- (id)stringForColumnAtIndex:(unsigned long long)arg1;
- (id)stringForColumn:(id)arg1;
- (double)doubleForColumnAtIndex:(unsigned long long)arg1;
- (double)doubleForColumn:(id)arg1;
- (_Bool)boolForColumnAtIndex:(unsigned long long)arg1;
- (_Bool)boolForColumn:(id)arg1;
- (long long)longForColumnAtIndex:(unsigned long long)arg1;
- (long long)longForColumn:(id)arg1;
- (int)intForColumnAtIndex:(unsigned long long)arg1;
- (int)intForColumn:(id)arg1;
- (unsigned long long)indexForName:(id)arg1;
- (id)initWithDatabaseResult:(id)arg1 data:(id)arg2;

@end

