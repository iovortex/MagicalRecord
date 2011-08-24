// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to SingleRelatedEntity.h instead.

#import <CoreData/CoreData.h>


@class ConcreteRelatedEntity;
@class AbstractRelatedEntity;
@class ConcreteRelatedEntity;
@class AbstractRelatedEntity;



@interface SingleRelatedEntityID : NSManagedObjectID {}
@end

@interface _SingleRelatedEntity : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (SingleRelatedEntityID*)objectID;



@property (nonatomic, retain) NSString *mappedStringAttribute;

//- (BOOL)validateMappedStringAttribute:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) ConcreteRelatedEntity* testConcreteToOneRelationship;
//- (BOOL)validateTestConcreteToOneRelationship:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSSet* testAbstractToManyRelationship;
- (NSMutableSet*)testAbstractToManyRelationshipSet;



@property (nonatomic, retain) NSSet* testConcreteToManyRelationship;
- (NSMutableSet*)testConcreteToManyRelationshipSet;



@property (nonatomic, retain) AbstractRelatedEntity* testAbstractToOneRelationship;
//- (BOOL)validateTestAbstractToOneRelationship:(id*)value_ error:(NSError**)error_;




@end

@interface _SingleRelatedEntity (CoreDataGeneratedAccessors)

- (void)addTestAbstractToManyRelationship:(NSSet*)value_;
- (void)removeTestAbstractToManyRelationship:(NSSet*)value_;
- (void)addTestAbstractToManyRelationshipObject:(AbstractRelatedEntity*)value_;
- (void)removeTestAbstractToManyRelationshipObject:(AbstractRelatedEntity*)value_;

- (void)addTestConcreteToManyRelationship:(NSSet*)value_;
- (void)removeTestConcreteToManyRelationship:(NSSet*)value_;
- (void)addTestConcreteToManyRelationshipObject:(ConcreteRelatedEntity*)value_;
- (void)removeTestConcreteToManyRelationshipObject:(ConcreteRelatedEntity*)value_;

@end

@interface _SingleRelatedEntity (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveMappedStringAttribute;
- (void)setPrimitiveMappedStringAttribute:(NSString*)value;





- (ConcreteRelatedEntity*)primitiveTestConcreteToOneRelationship;
- (void)setPrimitiveTestConcreteToOneRelationship:(ConcreteRelatedEntity*)value;



- (NSMutableSet*)primitiveTestAbstractToManyRelationship;
- (void)setPrimitiveTestAbstractToManyRelationship:(NSMutableSet*)value;



- (NSMutableSet*)primitiveTestConcreteToManyRelationship;
- (void)setPrimitiveTestConcreteToManyRelationship:(NSMutableSet*)value;



- (AbstractRelatedEntity*)primitiveTestAbstractToOneRelationship;
- (void)setPrimitiveTestAbstractToOneRelationship:(AbstractRelatedEntity*)value;


@end
