//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ZZChannelOutput.h"

@class NSMutableData;

@interface ZZDataChannelOutput : NSObject <ZZChannelOutput>
{
    NSMutableData *_allData;
    unsigned int _offset;
}

- (void).cxx_destruct;
- (void)close;
- (_Bool)truncateAtOffset:(unsigned int)arg1 error:(out id *)arg2;
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;
- (_Bool)seekToOffset:(unsigned int)arg1 error:(out id *)arg2;
- (unsigned int)offset;
- (id)initWithData:(id)arg1;

@end

