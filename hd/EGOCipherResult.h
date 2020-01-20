//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSArray, NSString;

@interface EGOCipherResult : NSObject <NSFastEnumeration>
{
    int _errorCode;
    int _columnCount;
    NSString *_errorMessage;
    NSArray *_columnNames;
    NSArray *_columnTypes;
    NSArray *_rows;
}

@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(copy, nonatomic) NSArray *columnTypes; // @synthesize columnTypes=_columnTypes;
@property(copy, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(nonatomic) int columnCount; // @synthesize columnCount=_columnCount;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)count;
- (id)lastRow;
- (id)firstRow;
- (id)rowAtIndex:(unsigned long long)arg1;

@end

