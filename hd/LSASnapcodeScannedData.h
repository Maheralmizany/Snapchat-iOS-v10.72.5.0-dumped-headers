//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface LSASnapcodeScannedData : NSObject
{
    _Bool _hasScannedData;
    long long _codeType;
    long long _codeTypeMeta;
    NSString *_stringData;
    NSData *_rawData;
}

@property(readonly, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(readonly, nonatomic) NSString *stringData; // @synthesize stringData=_stringData;
@property(readonly, nonatomic) long long codeTypeMeta; // @synthesize codeTypeMeta=_codeTypeMeta;
@property(readonly, nonatomic) long long codeType; // @synthesize codeType=_codeType;
@property(readonly, nonatomic) _Bool hasScannedData; // @synthesize hasScannedData=_hasScannedData;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRawData:(id)arg1 stringData:(id)arg2 codeType:(long long)arg3 codeTypeMeta:(long long)arg4 hasScannedData:(_Bool)arg5;

@end

