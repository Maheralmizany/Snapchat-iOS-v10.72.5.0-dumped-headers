//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCMP4Box : NSObject
{
    NSString *_type;
}

+ (_Bool)readHeaderSize:(unsigned long long *)arg1 type:(id *)arg2 fromFile:(id)arg3 error:(id *)arg4;
+ (_Bool)isCompositionBox:(id)arg1;
+ (id)mp4BoxFromFileHandle:(id)arg1 atOffset:(unsigned long long)arg2 error:(id *)arg3;
+ (void)writeHeaderOfSize:(unsigned long long)arg1 type:(id)arg2 toFile:(id)arg3;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1;
- (void)writeToFile:(id)arg1;
- (unsigned long long)size;

@end

