/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface _MFMessageLoadingContext : NSObject
{
    unsigned int _options;
    NSMutableSet *_seenConversationIDs;
    NSMutableArray *_messages;
    id <MFMessageConsumer> _target;
    unsigned long long _chunkSize;
    double _chunkInterval;
    double _lastChunkSentTime;
    unsigned long long _messagesLoaded;
    struct sqlite3 *_database;
}

@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(nonatomic) unsigned long long messagesLoaded; // @synthesize messagesLoaded=_messagesLoaded;
@property(nonatomic) double lastChunkSentTime; // @synthesize lastChunkSentTime=_lastChunkSentTime;
@property(nonatomic) double chunkInterval; // @synthesize chunkInterval=_chunkInterval;
@property(nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(retain, nonatomic) id <MFMessageConsumer> target; // @synthesize target=_target;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSMutableSet *seenConversationIDs; // @synthesize seenConversationIDs=_seenConversationIDs;
- (void).cxx_destruct;
- (id)description;

@end

