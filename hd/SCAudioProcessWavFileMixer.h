//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCAudioProcessWavFileMixer : NSObject
{
    float *_audioData;
    unsigned int _audioDataLength;
    unsigned int _audioDataCurrentOffset;
}

- (int)_readInWavFileAsynchronously:(id)arg1;
- (int)mixWavFileIntoBufferList:(struct AudioBufferList *)arg1;
- (void)dealloc;
- (id)initWithWavFilePath:(id)arg1;

@end

